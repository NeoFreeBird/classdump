//
#ifndef TFNTwitterCompositionEntryPointScribeInfo_h
#define TFNTwitterCompositionEntryPointScribeInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TFNTwitterCompositionScribeSnapshot.h"

@class NSDate, NSObject, NSString;

@interface TFNTwitterCompositionEntryPointScribeInfo : NSObject <NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *entry;
@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *surface;
@property (readonly, copy, nonatomic) NSString *trigger;
@property (readonly, copy, nonatomic) NSString *expandReason;
@property (readonly, nonatomic) TFNTwitterCompositionScribeSnapshot *expandSnapshot;
@property (readonly, nonatomic) NSDate *fullComposerOpenedAt;
@property (nonatomic) _Bool draftRestored;
@property (copy, nonatomic) NSString *sendVia;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithEntry:(id)entry page:(id)page surface:(id)surface;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)recordFullComposerOpenWithTrigger:(id)trigger expandReason:(id)reason snapshot:(id)snapshot date:(id)date;
- (void)clearFullComposerOpen;
- (void)markRestoredFromDrafts;
- (id)eventInfo;
- (void)logAction:(id)action page:(id)page element:(id)element eventInfo:(id)info scribe:(id)scribe;

@end

#endif /* TFNTwitterCompositionEntryPointScribeInfo_h */
