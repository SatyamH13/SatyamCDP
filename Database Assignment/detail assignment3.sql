-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 23, 2022 at 10:43 AM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 7.4.29

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assignment1`
--

-- --------------------------------------------------------

--
-- Table structure for table `detail`
--

CREATE TABLE `detail` (
  `Number` int(11) NOT NULL,
  `FirstName` varchar(20) NOT NULL,
  `Lastname` varchar(20) NOT NULL,
  `Address` varchar(50) NOT NULL,
  `city` varchar(20) NOT NULL,
  `age` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `detail`
--

INSERT INTO `detail` (`Number`, `FirstName`, `Lastname`, `Address`, `city`, `age`) VALUES
(1, 'mickey', 'mous', '123 fantasy way', 'anaheim', 73),
(2, 'bat', 'man', '321 cavern ave', 'gotham', 54),
(3, 'wonder', 'woman', '987 truth way', 'paradise', 39),
(4, 'donald', 'duck', '555 quack street', 'mallard', 65),
(5, 'bugs', 'bunny', '567 carrot street', 'rascal', 58),
(6, 'wiley', 'coyote', '999 acme way', 'canyon', 61),
(7, 'cat', 'woman', '234 purrfect street', 'hairball', 32),
(8, 'tweety', 'bird', '543', 'itotltaw', 28);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
