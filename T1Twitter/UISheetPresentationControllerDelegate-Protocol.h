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
