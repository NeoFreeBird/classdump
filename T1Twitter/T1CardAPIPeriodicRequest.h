//
#ifndef T1CardAPIPeriodicRequest_h
#define T1CardAPIPeriodicRequest_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface T1CardAPIPeriodicRequest : NSObject

@property (readonly, copy, nonatomic) NSString *capiURL;
@property (readonly, copy, nonatomic) NSDictionary *requestData;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double refreshInterval;

/* instance methods */
- (id)init;
- (id)initWithCapiURLString:(id)urlstring interval:(double)interval requestData:(id)data accountID:(id)id forCardIdentifier:(id)identifier;

@end

#endif /* T1CardAPIPeriodicRequest_h */
