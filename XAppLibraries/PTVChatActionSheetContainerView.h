//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
