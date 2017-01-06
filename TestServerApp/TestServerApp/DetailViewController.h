//
//  DetailViewController.h
//  TestServerApp
//
//  Created by Vipin Joshi on 06/01/17.
//  Copyright © 2017 Vipin Joshi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

