//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UISheetPresentationControllerDelegate_Protocol_h
#define UISheetPresentationControllerDelegate_Protocol_h
@import Foundation;

#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@protocol UISheetPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@required

@optional

/* optional instance methods */
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)identifier;

@end

#endif /* UISheetPresentationControllerDelegate_Protocol_h */
