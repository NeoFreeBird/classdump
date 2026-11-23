//
#ifndef TFSCS2TwitterCardDataBuilder_h
#define TFSCS2TwitterCardDataBuilder_h
@import Foundation;

@class NSObject;

@interface TFSCS2TwitterCardDataBuilder : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userBuilder;
}

/* instance methods */
- (id)initWithUserBuilder:(id)builder;
- (id)cardDataFromJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSCS2TwitterCardDataBuilder_h */
