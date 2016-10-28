//
//  UILocalNotification+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILocalNotification,UILocalNotification *);

@interface UILocalNotification (TFEasyCoder)

TF_EC_MSTATIC_INT(UILocalNotification, UILocalNotification *);
TF_EC_MINSTANCE_INT(UILocalNotification,UILocalNotification *);


TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSDate *,fireDate);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,unsigned long long,repeatInterval);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSCalendar *,repeatCalendar);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,BOOL,regionTriggersOnce);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSString *,alertBody);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,BOOL,hasAction);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSString *,alertAction);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSString *,alertLaunchImage);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSString *,alertTitle);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSString *,soundName);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,long long,applicationIconBadgeNumber);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSDictionary *,userInfo);
TF_EC_CHAIN_PROP_INT(UILocalNotification ,NSString *,category);


@end