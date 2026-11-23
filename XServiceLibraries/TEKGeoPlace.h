//
#ifndef TEKGeoPlace_h
#define TEKGeoPlace_h
@import Foundation;

@class NSObject, NSString;

@interface TEKGeoPlace : NSObject

@property (readonly, copy, nonatomic) NSString *placeID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *placeTypeString;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* TEKGeoPlace_h */
