//
#ifndef TFSTwitterMediaInformation_h
#define TFSTwitterMediaInformation_h
@import Foundation;

#include "TFSTwitterMediaImageInformation.h"
#include "TFSTwitterMediaProcessingInformation.h"

@class NSDate, NSObject, NSString;

@interface TFSTwitterMediaInformation : NSObject

@property (readonly, copy, nonatomic) NSString *mediaID;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) TFSTwitterMediaImageInformation *imageInformation;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) TFSTwitterMediaProcessingInformation *processingInformation;

/* class methods */
+ (id)mediaInformationWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterMediaInformation_h */
