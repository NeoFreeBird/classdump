//
#ifndef _TtC13PaymentsXAuth19MoneyAuthJWTBuilder_h
#define _TtC13PaymentsXAuth19MoneyAuthJWTBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface PaymentsXAuth.MoneyAuthJWTBuilder : NSObject <TFSModel.TFSModelBuilder> // (Swift)

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* _TtC13PaymentsXAuth19MoneyAuthJWTBuilder_h */
