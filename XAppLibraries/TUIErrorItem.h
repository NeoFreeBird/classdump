//
#ifndef TUIErrorItem_h
#define TUIErrorItem_h
@import Foundation;

#include "TUIErrorItem-Protocol.h"

@class NSError, NSObject, NSString;

@interface TUIErrorItem : NSObject <TUIErrorItem>

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *mainErrorText;
@property (copy, nonatomic) NSString *errorSubtext;
@property (nonatomic) _Bool subtextShouldBeActionColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithError:(id)error mainErrorText:(id)text errorSubtext:(id)subtext subtextShouldBeActionColor:(_Bool)color;
- (id)initWithError:(id)error mainErrorText:(id)text errorSubtext:(id)subtext;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUIErrorItem_h */
