//
#ifndef T1EditProfileFormField_h
#define T1EditProfileFormField_h
@import Foundation;

@class NSString, TFNLegacyFormField;

@interface T1EditProfileFormField : TFNLegacyFormField

@property (readonly, nonatomic) NSString *scribeElement;

/* class methods */
+ (id)formFieldWithTitle:(id)title hintText:(id)text userInput:(id)input maxLength:(unsigned long long)length scribeElement:(id)element;
+ (_Bool)validURLString:(id)urlstring;

/* instance methods */

@end

#endif /* T1EditProfileFormField_h */
