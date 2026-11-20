//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPagedActionSheetViewDelegate_Protocol_h
#define PTVPagedActionSheetViewDelegate_Protocol_h
@import Foundation;

@protocol PTVPagedActionSheetViewDelegate

@required

/* required instance methods */
- (void)pagedActionSheetViewButtonPressedForAction:(id)action;

@optional

@end

#endif /* PTVPagedActionSheetViewDelegate_Protocol_h */
