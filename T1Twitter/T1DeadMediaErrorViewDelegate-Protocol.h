//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DeadMediaErrorViewDelegate_Protocol_h
#define T1DeadMediaErrorViewDelegate_Protocol_h
@import Foundation;

@protocol T1DeadMediaErrorViewDelegate

@required

/* required instance methods */
- (void)deadMediaErrorViewDidTapDisputeForm:(id)form;

@optional

@end

#endif /* T1DeadMediaErrorViewDelegate_Protocol_h */
