//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1FoundMediaPresentationContext_h
#define T1FoundMediaPresentationContext_h
@import Foundation;

@class NSObject, UIViewController;

@interface T1FoundMediaPresentationContext : NSObject

@property (weak, nonatomic) UIViewController *gifPickerViewController;
@property (readonly, nonatomic) _Bool isPresenting;

/* instance methods */
- (void)presentGIFSearchWithViewController:(id)controller communityReference:(id)reference account:(id)account sourceInfo:(id)info animated:(_Bool)animated;
- (void)_handleSelectedFoundMediaItem:(id)item communityReference:(id)reference;

@end

#endif /* T1FoundMediaPresentationContext_h */
