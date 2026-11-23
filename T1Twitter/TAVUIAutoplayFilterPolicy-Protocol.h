//
#ifndef TAVUIAutoplayFilterPolicy_Protocol_h
#define TAVUIAutoplayFilterPolicy_Protocol_h
@import Foundation;

@protocol TAVUIAutoplayFilterPolicy

@required

/* required instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;

@optional

@end

#endif /* TAVUIAutoplayFilterPolicy_Protocol_h */
