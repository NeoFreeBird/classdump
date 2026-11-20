//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASCreateTitleEditViewDelegate_Protocol_h
#define TASCreateTitleEditViewDelegate_Protocol_h
@import Foundation;

@protocol TASCreateTitleEditViewDelegate

@required

/* required instance methods */
- (void)createTitleEditViewDidBeginEditing:(id)editing;
- (void)createTitleEditViewDidChange:(id)change;

@optional

@end

#endif /* TASCreateTitleEditViewDelegate_Protocol_h */
