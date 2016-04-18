//
//  ResponseDataType.h
//  Networking
//

//

#import <Foundation/Foundation.h>

@interface ResponseDataType : NSObject

+ (instancetype)type;

@end

@interface JsonDataType : ResponseDataType

@end

@interface HttpDataType : ResponseDataType

@end