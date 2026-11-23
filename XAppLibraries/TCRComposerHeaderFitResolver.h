//
#ifndef TCRComposerHeaderFitResolver_h
#define TCRComposerHeaderFitResolver_h
@import Foundation;

@class NSObject;

@interface TCRComposerHeaderFitResolver : NSObject // (Swift)

/* class methods */
+ (long long)fitForBarWidth:(double)width cancelWidth:(double)width closeWidth:(double)width secondaryWidth:(double)width compactSecondaryWidth:(double)width postWidth:(double)width;

/* instance methods */
- (id)init;

@end

#endif /* TCRComposerHeaderFitResolver_h */
