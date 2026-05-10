#include <Uefi.h>

#include <Library/BaseMemoryLib.h>
#include <Library/PrintLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Protocol/SimpleTextIn.h>
#include <Protocol/GraphicsOutput.h>

#include <viZBIOS.h>

#include "Color.h"
#include "viZBIOSDxe.h"

typedef enum {
    UI_STATE_BOOT,
    UI_STATE_ADVANCED,
    UI_STATE_SECURITY,
    UI_STATE_EXIT
} VIZ_UI_STATE;

typedef struct {
    VIZ_UI_STATE State;
    UINTN SelectedIndex;
    UINTN BootCount;
} VIZ_UI_CONTEXT;

EFI_STATUS
EFIAPI
viZBIOSDxeInitialize (
	IN EFI_HANDLE ImageHandle, 
	IN EFI_SYSTEM_TABLE *SystemTable
	)
{
	DEBUG((EFI_D_INFO, "Entering viZBIOS Setup\n"));

	
	return EFI_SUCCESS;
}