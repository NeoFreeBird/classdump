//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CADisplayLink_TAVDisplayLink_h
#define CADisplayLink_TAVDisplayLink_h
@import Foundation;

@interface CADisplayLink (TAVDisplayLink)

/* instance methods */
- (id)initWithBlock:(id /* block */)block;

@end

#endif /* CADisplayLink_TAVDisplayLink_h */
