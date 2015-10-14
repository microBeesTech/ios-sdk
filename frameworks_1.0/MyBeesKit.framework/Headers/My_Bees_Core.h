//
//  My_Bees_Core.h
//  my_bee_framework
//
//  Created by Alfredo on 30/09/15.
//  Copyright (c) 2015 Alfredo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface My_Bees_Core : UIViewController

-(NSString *) getToken;
-(void) removeToken;
-(void) connect: (void (^)(BOOL finished))OnSuccess OnFailed:(void (^)(NSError *error))OnFailed;
+(instancetype)sharedInstance;
-(void) send:(NSString *)method
            :(NSMutableDictionary *)parameters
     success:(void (^)(id responseObject))success
     failure:(void (^)(NSError *error))failure;
-(void) send:(NSString *)method
     success:(void (^)(id responseObject))success
     failure:(void (^)(NSError *error))failure;
-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
@end