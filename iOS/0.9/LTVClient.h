//
//  LTVClient.h
//  LTVClient
//
//  Created by Hugo Troche on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LTVClient : NSObject

+ (void) track:(NSString *) secretKey;

+ (void) trackActivation:(NSString *) label;

@end
