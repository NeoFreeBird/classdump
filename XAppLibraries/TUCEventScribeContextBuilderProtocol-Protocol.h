//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
