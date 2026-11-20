//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InlineMediaViewPrerollDelegate_Protocol_h
#define T1InlineMediaViewPrerollDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1InlineMediaViewPrerollDelegate <NSObject>

@required

/* required instance methods */
- (void)inlineMediaView:(id)view didStartPrerollWithCTAModel:(id)ctamodel;
- (void)inlineMediaViewDidEndPreroll:(id)preroll;
- (void)inlineMediaViewWillPrepareForReuse;
- (void)inlineMediaViewWillHideCTA;
- (void)inlineMediaViewWillShowCTA;

@optional

@end

#endif /* T1InlineMediaViewPrerollDelegate_Protocol_h */
