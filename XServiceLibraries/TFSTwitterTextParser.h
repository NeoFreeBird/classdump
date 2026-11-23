//
#ifndef TFSTwitterTextParser_h
#define TFSTwitterTextParser_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterTextParser : NSObject

@property (readonly, nonatomic) NSArray *links;
@property (readonly, nonatomic) NSArray *hashtags;
@property (readonly, nonatomic) NSArray *usernames;
@property (readonly, nonatomic) NSArray *stockSymbols;
@property (readonly, nonatomic) NSArray *smartTags;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *activeRanges;

/* instance methods */
- (id)init;
- (id)initWithString:(id)string;
- (id)initWithDisplayString:(id)string existingEntities:(id)entities;
- (void)_setUpEmailAddressesWithText:(id)text entities:(id)entities;
- (void)_setUpSmartTagsWithText:(id)text entities:(id)entities;

@end

#endif /* TFSTwitterTextParser_h */
