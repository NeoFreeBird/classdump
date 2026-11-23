//
#ifndef _TtC14PhoneNumberKit12RegexManager_h
#define _TtC14PhoneNumberKit12RegexManager_h
@import Foundation;

@class DispatchQueue, _$s10Foundation12CharacterSetVMn, _$sSDySSSo19NSRegularExpressionCG, _TtCs12_SwiftObject;

@interface PhoneNumberKit.RegexManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.String : __C.NSRegularExpression] regularExpressionPool;
    DispatchQueue regularExpressionPoolQueue;
    nominal type descriptor for Foundation.CharacterSet spaceCharacterSet;
}

@end

#endif /* _TtC14PhoneNumberKit12RegexManager_h */
