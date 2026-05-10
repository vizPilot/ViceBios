#include <Protocol/GraphicsOutput.h>

EFI_STATUS
viZBIOS_VideoInit (
    EFI_GRAPHICS_OUTPUT_PROTOCOL *Gop
);

EFI_STATUS
viZBIOS_VideoClear (
    VOID
);

EFI_STATUS
viZBIOS_DrawText (
    UINT32 X,
    UINT32 Y,
    CHAR16 *Text
);
