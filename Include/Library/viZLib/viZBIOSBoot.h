#include <Uefi.h>

typedef struct {
    CHAR16  *Name;
    EFI_HANDLE Handle;
} VIZ_BOOT_ENTRY;

UINTN
viZBIOS_GetBootEntries (
    VIZ_BOOT_ENTRY **Entries
);

EFI_STATUS
viZBIOS_BootEntry (
    UINTN Index
);
