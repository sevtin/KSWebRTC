//
//  RTCSessionDescription+Category.h
//  KSWebRTC
//
//  Created by saeipi on 2020/7/10.
//  Copyright © 2020 saeipi. All rights reserved.
//


#import "WebRTC/RTCSessionDescription.h"

@interface RTCSessionDescription (Category)

+ (RTCSessionDescription *)descriptionFromJSONDictionary:(NSDictionary *)dictionary;
- (NSData *)jsonData;

@end
