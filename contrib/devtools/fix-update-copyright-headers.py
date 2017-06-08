#!/usr/bin/env python
# Update or add copyright headers to source files.
# John Stowers

import os

new_licence = """ *
 * This file is part of wasp, some code taken from paparazzi (GPL)
 *
 * wasp is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * wasp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
""" 

me = "Copyright (c) 2017 CEVAP - https://pgp.mit.edu/pks/lookup?op=get&search=0xF71FAC12F9B3EB9E	\
   512E/F9B3EB9E 2017-06-03 Ionomy Gaming Platform (SECA - ECDSA+ECDHA - 03.06.2019) <ionomy@mail.i2p>	\
   Clearnet: https://iond.freeiz.com      Clearnet Git: https://github.com/cevap/ion			\
   i2p     : http://ionomy.i2p            i2p      Git: http://git.psi.i2p/ionomy/			\
                `/:`                           								\
             -odN: ionomy.i2p                  								\
          `+mMMN-                              								\
          +MMMM/.--`               ..          								\
         +NMMMh/MMMMh            .dMMm+        								\
       -mMMMMM/NMMMMM`          .NMMMMMd       								\
      oMMMMMMM.sMMMMm.          .MMMMMMs       								\
     /MMMMMMMMo `/N/             /mMMdyd-      								\
     dMMMMMMMMM-  `                -+ :Mm      								\
    .MMMMMMMMMMy                      -MM-     								\
    :MMMMMMMMMM:                      `MM+     								\
    /MMMMMMMMMm       `      `         dMh     								\
    :MMMMMMMMMd    `+mM-    /MNy:      yMM.    								\
    .MMMMMMMMMN`  -NMMy     `hMMMd`    dMMs    								\
     +MMMMMMMMM/  `ydo        /dy:    -MMMM:   								\
      /MMMMMMMMm`                    `mMMMMN.  								\
       oMMMMMMMMm/    `ydmmNy     .+yNMMMMMMm` 								\
       .MMMMMMMMMMmo.  `:oo-    /dMMMMMMMMMMMd 								\
   :    NMMMMMMMMMMMMms:`   .:sNMMMMMMMMMMMMMMo								\
   hm+. sMMMMMMMMMMMMMMMMNNNh+- +MMMMMMMMMMMMMN								\
  `NMMMmymMMMMMMMMMMMMMMMd/`     dMMMMMMMMMMMMs								\
  hMMMMMMMMMMMMMMMMMMMMy-        dMMMMMMMMMMMm`								\
 `yNMMMMMMMMMMMMMMMMMMo    .h-.-oMMMMMMMMMMMM: 								\
    `.:::sMMMMMMMMMMMMMs  -NMMMMMMMMMMMMMMMMh  								\
         :MMMMMMMMMMMMMM+ .////NMMMMMMMMMMMd`  								\
          +hdNNMMMMNNmdy/       .-://+++/:.    "
antoine = "Copyright (C) 2017 Ion Core Team"

def get_copyright_and_comment(txt):
    got_copyright = ""
    got_licence = False
    getting_comment = False
    comment = []
    linenum = 0
    for line in txt.splitlines():
        linenum += 1

        def strip(s):
            return s.strip("* /")

        if line.startswith(" */"):
            break
        if line.startswith(" * Copyright (C)"):
            got_copyright = strip(line)
            continue
        if got_copyright and line.startswith(" * You should have received a copy of the GNU General Public License"):
            got_licence = True
            continue
        if got_copyright and got_licence and line.startswith(" * Boston"):
            getting_comment = True
            continue

        if getting_comment and line != " *":
            comment.append(strip(line))

    return got_copyright, comment, linenum

def generate_header(people, comment):
    header = "/*\n"
    for p in people:
        header += " * %s\n" % p
    header += new_licence
    for c in comment:
        header += " * %s\n" % c
    header += " */\n"
    return header

def update_source(filename):
    print filename
    fdata = file(filename, "r+").read()
    if fdata.count("This file is part of wasp, some code taken from paparazzi (GPL)"):
        print "\tskip"
        return
    elif fdata.count("You should have received a copy of the GNU General Public License"):
        old_author, comments, linenum = get_copyright_and_comment(fdata)
        header = generate_header([old_author,antoine,me], comments)
        print "\tupdate"
    else:
        linenum = 0
        header = generate_header([antoine,me], [])
        print "\tadd"

    f = file(filename,"w")
    f.write(header)
    for l in fdata.splitlines()[linenum:]:
        f.write(l)
        f.write("\n")

def recursive_traversal(dir, excludedir):
    fns = os.listdir(dir)
    print "listing "+dir
    for fn in fns:
        fullfn = os.path.join(dir,fn)
        if fullfn in excludedir:
            continue
        if os.path.isdir(fullfn):
            recursive_traversal(fullfn, excludedir)
        else:
            if fullfn.endswith(".c") or fullfn.endswith(".h"):
                update_source(fullfn)

if __name__ == "__main__":
    recursive_traversal(".", ["./generated", "./arm7/lpcusb", "./arm7/include"])
