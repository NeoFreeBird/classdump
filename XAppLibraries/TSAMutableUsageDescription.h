//
#ifndef TSAMutableUsageDescription_h
#define TSAMutableUsageDescription_h
@import Foundation;

#include "TSAUsageDescription.h"

@class NSString, NSURL, UIImage;

@interface TSAMutableUsageDescription : TSAUsageDescription

@property (retain, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSURL *learnMoreURL;
@property (copy, nonatomic) NSString *neverButtonText;
@property (copy, nonatomic) NSString *acceptButtonText;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TSAMutableUsageDescription_h */
