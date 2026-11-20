//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardViewFactory_h
#define T1UnifiedCardViewFactory_h
@import Foundation;

#include "TUCUnifiedCardViewFactory-Protocol.h"

@class NSObject, TFNTwitterAccount, TUCViewRegistry;

@interface T1UnifiedCardViewFactory : NSObject <TUCUnifiedCardViewFactory>

@property (retain, nonatomic) TUCViewRegistry *viewRegistry;
@property (retain, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithViewRegistry:(id)registry account:(id)account;
- (id)unifiedCardView;
- (id)handlerWithEvent:(id)event presentingViewController:(id)controller scribeContext:(id)context promotedContent:(id)content unifiedCardView:(id)view presentingCell:(id)cell;
- (id)layoutStateForUnifiedCard:(id)card cardWidth:(double)width layoutContext:(id)context;

@end

#endif /* T1UnifiedCardViewFactory_h */
