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
