//
#ifndef TUCUnifiedCardViewFactory_Protocol_h
#define TUCUnifiedCardViewFactory_Protocol_h
@import Foundation;

@protocol TUCUnifiedCardViewFactory

@required

/* required instance methods */
- (id)unifiedCardView;
- (id)layoutStateForUnifiedCard:(id)card cardWidth:(double)width layoutContext:(id)context;
- (id)handlerWithEvent:(id)event presentingViewController:(id)controller scribeContext:(id)context promotedContent:(id)content unifiedCardView:(id)view presentingCell:(id)cell;

@optional

@end

#endif /* TUCUnifiedCardViewFactory_Protocol_h */
