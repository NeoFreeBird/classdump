//
#ifndef GACAppCheckToken_h
#define GACAppCheckToken_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface GACAppCheckToken : NSObject

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSDate *receivedAtDate;

/* instance methods */
- (id)initWithTokenExchangeResponse:(id)response requestDate:(id)date error:(id *)error;
- (id)initWithResponseDict:(id)dict requestDate:(id)date error:(id *)error;
- (id)initWithToken:(id)token expirationDate:(id)date receivedAtDate:(id)date;
- (id)initWithToken:(id)token expirationDate:(id)date;

@end

#endif /* GACAppCheckToken_h */
