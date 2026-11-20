//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVUIAutoplaySortPolicy_Protocol_h
#define TAVUIAutoplaySortPolicy_Protocol_h
@import Foundation;

@protocol TAVUIAutoplaySortPolicy

@required

/* required instance methods */
- (_Bool)autoplayablesAreInBestToWorstOrderWithFirstAutoplayable:(id)autoplayable secondAutoplayable:(id)autoplayable;

@optional

@end

#endif /* TAVUIAutoplaySortPolicy_Protocol_h */
