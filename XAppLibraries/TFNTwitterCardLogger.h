//
#ifndef TFNTwitterCardLogger_h
#define TFNTwitterCardLogger_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class NSObject;

@interface TFNTwitterCardLogger : NSObject

@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;
- (void)logAppIfAppropriateWithAppID:(id)id action:(id)action category:(id)category page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters isTimeSensitive:(_Bool)sensitive;
- (void)logAdIfAppropriateWithPromotedEventType:(long long)type cardDataSource:(id)source extraParameters:(id)parameters;
- (_Bool)_isLoggableAdWithStatus:(id)status;

@end

#endif /* TFNTwitterCardLogger_h */
