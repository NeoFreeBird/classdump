//
#ifndef TFSEventDrivenTraceRepository_ONB_h
#define TFSEventDrivenTraceRepository_ONB_h
@import Foundation;

@interface TFSEventDrivenTraceRepository (ONB)

/* instance methods */
- (void)activateOnboardingOpenHomeTimelineTrace;
- (void)private_activateWithTraceType:(id)type rootSpan:(id /* block */)span;

@end

#endif /* TFSEventDrivenTraceRepository_ONB_h */
