#ifndef __VIZBIOS_PROTOCOL_H__
#define __VIZBIOS_PROTOCOL_H__

#define VIZBIOS_PROTOCOL_GUID \
  { 0x9b12f1c3, 0x8d21, 0x4e56, {0x91,0xa2,0x33,0x77,0x55,0xaa,0xbb,0xcc} }

typedef struct _VIZBIOS_PROTOCOL VIZBIOS_PROTOCOL;

typedef
EFI_STATUS
(EFIAPI *VIZBIOS_LAUNCH)(
  VOID
  );

struct _VIZBIOS_PROTOCOL {
  VIZBIOS_LAUNCH Launch;
};

extern EFI_GUID gViZBIOSProtocolGuid;

#endif