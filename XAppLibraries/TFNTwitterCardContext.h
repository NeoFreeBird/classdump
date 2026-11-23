//
#ifndef TFNTwitterCardContext_h
#define TFNTwitterCardContext_h
@import Foundation;

#include "TFCCardContext-Protocol.h"
#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFNTwitterAccount.h"

@class NSObject, NSString;

@interface TFNTwitterCardContext : NSObject <TFCCardContext>

@property (retain, nonatomic) TFCCardData *cardData;
@property (readonly, weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCardDataSource:(id)source account:(id)account displayMode:(long long)mode;
- (id)cardContextWithTransformedCardData:(id)data;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNTwitterCardContext_h */
