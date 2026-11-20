//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPagedActionSheetControllerDelegate_Protocol_h
#define PTVPagedActionSheetControllerDelegate_Protocol_h
@import Foundation;

@protocol PTVPagedActionSheetControllerDelegate

@required

/* required instance methods */
- (void)pagedActionSheetControllerDismissPressed:(id)pressed;

@optional

@end

#endif /* PTVPagedActionSheetControllerDelegate_Protocol_h */
