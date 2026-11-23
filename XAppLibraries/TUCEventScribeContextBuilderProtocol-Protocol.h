//
#ifndef TUCEventScribeContextBuilderProtocol_Protocol_h
#define TUCEventScribeContextBuilderProtocol_Protocol_h
@import Foundation;

@protocol TUCEventScribeContextBuilderProtocol

@required

/* required instance methods */
- (id)scribeContextWithUCDetailsFor:(id)_for scribeContext:(id)context unifiedCardView:(id)view presentingCell:(id)cell presentingViewController:(id)controller unifiedCardsFeatures:(id)features promotedContent:(id)content;

@optional

@end

#endif /* TUCEventScribeContextBuilderProtocol_Protocol_h */
