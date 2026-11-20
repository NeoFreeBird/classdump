//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSARequestItem_h
#define TSARequestItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TSAContext-Protocol.h"
#include "TSARequestItem-Protocol.h"
#include "TSAUsageDescription.h"

@class NSObject, NSString;

@interface TSARequestItem : NSObject <TSARequestItem, NSCopying>

@property (retain, nonatomic) id <TSAContext> context;
@property (nonatomic) long long result;
@property (nonatomic) long long serviceType;
@property (retain, nonatomic) TSAUsageDescription *usageDescription;
@property (nonatomic) long long requestSource;
@property (nonatomic) long long requestCount;
@property (copy, nonatomic) id /* block */ acceptBlock;
@property (copy, nonatomic) id /* block */ acceptWithoutPresentationBlock;
@property (copy, nonatomic) id /* block */ notNowBlock;
@property (copy, nonatomic) id /* block */ neverBlock;
@property (copy, nonatomic) id /* block */ presentationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)accept:(id)accept;
- (void)acceptWithoutPresentation:(id)presentation;
- (void)notNow:(id)now;
- (void)never:(id)never;
- (void)private_updateResult:(long long)result;

@end

#endif /* TSARequestItem_h */
