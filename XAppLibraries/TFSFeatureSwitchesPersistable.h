//
#ifndef TFSFeatureSwitchesPersistable_h
#define TFSFeatureSwitchesPersistable_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSFeatureSwitchesConfig.h"

@class NSObject, NSString;

@interface TFSFeatureSwitchesPersistable : NSObject <NSCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) TFSFeatureSwitchesConfig *config;
@property (retain, nonatomic) TFSFeatureSwitchesConfig *overrideConfig;
@property (retain, nonatomic) TFSFeatureSwitchesConfig *pendingConfig;

/* instance methods */
- (id)initWithAccountID:(id)id config:(id)config overrideConfig:(id)config pendingConfig:(id)config;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSFeatureSwitchesPersistable_h */
