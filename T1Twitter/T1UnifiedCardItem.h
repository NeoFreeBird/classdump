//
#ifndef T1UnifiedCardItem_h
#define T1UnifiedCardItem_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"

@class NSObject, TUCUnifiedCard, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1UnifiedCardItem : NSObject

@property (readonly, nonatomic) TUCUnifiedCard *unifiedCard;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;

/* instance methods */
- (id)init;
- (id)initWithUnifiedCard:(id)card cardDataSource:(id)source promotedContent:(id)content;

@end

#endif /* T1UnifiedCardItem_h */
