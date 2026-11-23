//
#ifndef TASLinkHelper_h
#define TASLinkHelper_h
@import Foundation;

@class NSObject;

@interface TASLinkHelper : NSObject // (Swift)

/* class methods */
+ (id)buildAttributedActiveTextModelWithHtmlString:(id)string font:(id)font alignment:(long long)alignment;

/* instance methods */
- (id)init;

@end

#endif /* TASLinkHelper_h */
