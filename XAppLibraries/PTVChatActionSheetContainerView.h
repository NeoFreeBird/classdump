//
#ifndef PTVChatActionSheetContainerView_h
#define PTVChatActionSheetContainerView_h
@import Foundation;

#include "PTVActionSheetContainerView.h"

@interface PTVChatActionSheetContainerView : PTVActionSheetContainerView

@property (nonatomic) _Bool reportButtonsVisible;

/* instance methods */
- (id)chatActionSheetView;
- (void)setChatActionSheetDelegate:(id)delegate;

@end

#endif /* PTVChatActionSheetContainerView_h */
