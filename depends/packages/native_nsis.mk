package=native_nsis
$(package)_version=3.01
$(package)_download_path=https://sourceforge.net/projects/nsis/files/NSIS%203/$($(package)_version)
$(package)_file_name=nsis-$($(package)_version)-src.tar.bz2
$(package)_sha256_hash=604c011593be484e65b2141c50a018f1b28ab28c994268e4ecd377773f3ffba1

$(package)_scons_args=UNICODE=yes SKIPUTILS=zip2exe,"NSIS Menu" NSIS_CONFIG_CONST_DATA_PATH=yes
$(package)_scons_prefix=$($($(package)_type)_prefix)
$(package)_scons_prefix_bin=$($(package)_scons_prefix)/native/bin
$(package)_scons_prefix_conf=$($(package)_scons_prefix)/native/etc
$(package)_scons_prefix_data=$($(package)_scons_prefix)/native/share/nsis
$(package)_scons_prefix_doc=$($(package)_scons_prefix)/native/share/doc/nsis
$(package)_scons_prefix_dest=$($(package)_staging_dir)

define $(package)_fetch_cmds
  $(call fetch_file,$(package),$($(package)_download_path),$($(package)_download_file),$($(package)_file_name),$($(package)_sha256_hash)) 
endef

define $(package)_extract_cmds
  mkdir -p $($(package)_extract_dir) && \
  tar --strip-components=1 -xf $($(package)_source) 
endef

define $(package)_build_cmds
  scons $($(package)_scons_args) PREFIX=$($(package)_scons_prefix) PREFIX_BIN=$($(package)_scons_prefix_bin) PREFIX_DATA=$($(package)_scons_prefix_data) PREFIX_CONF=$($(package)_scons_prefix_conf) PREFIX_DOC=$($(package)_scons_prefix_doc) PREFIX_DEST=$($(package)_scons_prefix_dest)
endef

define $(package)_stage_cmds
 scons $($(package)_scons_args) PREFIX=$($(package)_scons_prefix) PREFIX_BIN=$($(package)_scons_prefix_bin) PREFIX_DATA=$($(package)_scons_prefix_data) PREFIX_CONF=$($(package)_scons_prefix_conf) PREFIX_DOC=$($(package)_scons_prefix_doc) PREFIX_DEST=$($(package)_scons_prefix_dest) install 
endef
