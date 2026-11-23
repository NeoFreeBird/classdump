//
#ifndef TSAUsageDescription_h
#define TSAUsageDescription_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSObject, NSString, NSURL, UIImage;

@interface TSAUsageDescription : NSObject <NSMutableCopying, NSCopying>

@property (readonly, nonatomic) UIImage *headerImage;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSURL *learnMoreURL;
@property (readonly, nonatomic) NSString *neverButtonText;
@property (readonly, nonatomic) NSString *acceptButtonText;

/* instance methods */
- (id)initWithHeaderImage:(id)image title:(id)title message:(id)message learnMoreURL:(id)url neverButtonText:(id)text acceptButtonText:(id)text;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TSAUsageDescription_h */
