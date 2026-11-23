//
#ifndef T1CallToActionsContainerViewDelegate_Protocol_h
#define T1CallToActionsContainerViewDelegate_Protocol_h
@import Foundation;

@protocol T1CallToActionsContainerViewDelegate

@required

/* required instance methods */
- (void)callToActionsContainerView:(id)view didSelectView:(id)view atIndex:(unsigned long long)index withEvent:(id)event;

@optional

@end

#endif /* T1CallToActionsContainerViewDelegate_Protocol_h */
