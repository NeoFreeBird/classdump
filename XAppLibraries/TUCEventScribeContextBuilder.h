//
#ifndef TUCEventScribeContextBuilder_h
#define TUCEventScribeContextBuilder_h
@import Foundation;

#include "TFSTwitterEntityURLProvider-Protocol.h"
#include "TUCEventScribeContextBuilderProtocol-Protocol.h"

@class NSObject;

@interface TUCEventScribeContextBuilder : NSObject <TUCEventScribeContextBuilderProtocol> // (Swift)

@property (nonatomic, retain) id <TFSTwitterEntityURLProvider> entityURLProvider;

/* instance methods */
- (id)initWithEntityURLProvider:(id)urlprovider;
- (id)scribeContextWithUCDetailsFor:(id)_for scribeContext:(id)context unifiedCardView:(id)view presentingCell:(id)cell presentingViewController:(id)controller unifiedCardsFeatures:(id)features promotedContent:(id)content;
- (id)init;

@end

#endif /* TUCEventScribeContextBuilder_h */
